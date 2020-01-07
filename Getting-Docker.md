#### Run Docker Locally on Your Mac

Start by following the instructions here to install docker:
https://docs.docker.com/install/.  This seems to work pretty easily,
but the course staff is not able to assist in getting docker running
on your Mac.

Once that's done, you should be able to run `docker` in the terminal.

One thing to keep in mind:  The docker image large (~9GB) and you'll need to devote at least 2GB of DRAM to it.


#### Run Docker on Your Windows Machine

It is possible to run Docker on Windows, but we've had many issues
with, and we don't support it.  The lab staff is not able to assist
with getting docker running under windows.

One thing to keep in mind:  The docker image large (~9GB) and you'll need to devote at least 2GB of DRAM to it.

Here is a short tutorial to help you install Docker on Windows 10. Here is a link to the same guide with visuals.
http://www.piazza.com/class_profile/get_resource/k4rct0mauar3/k546qnrbrzn1zg

1.  Install Windows 10 Pro or Education
    - If you have Windows 10 Pro or Education, continue to step 2. If you do not have Windows 10 Pro or Education, follow the steps below.
    - Follow the link below to get a free license for Windows 10 Education. You will have to make an account in order to get the free code. You must use your UCSD email.
[https://ucsd.onthehub.com/WebStore/OfferingDetails.aspx?o=9b3bfdc0-71e9-e611-9425-b8ca3a5db7a1](https://ucsd.onthehub.com/WebStore/OfferingDetails.aspx?o=9b3bfdc0-71e9-e611-9425-b8ca3a5db7a1)
    - Go to your windows 10 settings -> Update & Security -> Activation -> Change Product Key. Copy and paste your free key and install Windows
2.  Install Docker Desktop
    - Follow this link to download the docker desktop installer. You will need to create an account. Please do not install docker toolbox.
[https://hub.docker.com/?overlay=onboarding](https://hub.docker.com/?overlay=onboarding)
    - Run the installer and if it asks to enable hyper-v after it installs say yes. Your computer may need to restart.
    - Upon restarting, run docker desktop. You’ll know docker has started when the icon in your system tray stops animating.
    - Right click the docker icon and go to settings -> shared drives and click the checkbox next to the drive you wish to keep your labs on. You will need to enter your account password.
3.  Test your install
Open powershell and run the command:
```
docker run hello-world
```
Your output should look like this. (You may have extra text pulling the hello-world image)
```
Hello from Docker!
This message shows that your installation appears to be working correctly.

To generate this message, Docker took the following steps:
 1. The Docker client contacted the Docker daemon.
 2. The Docker daemon pulled the "hello-world" image from the Docker Hub.
    (amd64)
 3. The Docker daemon created a new container from that image which runs the
    executable that produces the output you are currently reading.
 4. The Docker daemon streamed that output to the Docker client, which sent it
    to your terminal.

To try something more ambitious, you can run an Ubuntu container with:
 $ docker run -it ubuntu bash

Share images, automate workflows, and more with a free Docker ID:
 https://hub.docker.com/

For more examples and ideas, visit:
 https://docs.docker.com/get-started/
```
4. To start docker into the development environment for the labs
Run the command replacing the bold parts:
```
docker run -it --volume "Directory to your lab folder":/runner/"Your lab folder name" stevenjswanson/cse141pp:latest
```

Change directories to land where your files should be.
```
cd ../runner
```

#### Use VirtualBox to Run Linux (on Mac or Windows if you have Intel VT-X or AMD-V support)

1.  Download and install VirtualBox: https://www.virtualbox.org/wiki/Downloads
2.  Open VirtualBox
3.  Click "New"
4.  Set "Type" = "Linux" and "Version" = "Ubuntu (64-bit)".
5.  The VM will need at least a couple GB of memory.
6.  Click through the default to create a disk.  You'll need at least 30GB.
7.  Download this: http://releases.ubuntu.com/16.04/ubuntu-16.04.6-desktop-amd64.iso 
8.  Go to `Settings->Storage`, click the '+' disk icon to add an optical drive.  Then `Add` and select the iso image above.  Click 'ok'.
9.  Click 'start' -- your VM should boot.
10. Click 'Install Ubuntu' and accept all the defaults.
    - If you are unable to see the buttons due to the screen being too small, you can press and hold *Alt* in windows then click the mouse to move the screen around.
11. Restart the VM when asked.
12. When it comes back, right click->Terminal.
13. Install docker with `sudo apt-get install docker.io`.
14. Follow these instructions to install the "Guest Additions": https://www.virtualbox.org/manual/ch04.html#additional-linux-install.  This will make working with the VM easier.
   

Type `docker --help ` at the command line.  It should printout some usage information:

```
Usage:    docker [OPTIONS] COMMAND

A self-sufficient runtime for containers

Options:
      --config string      Location of client config files (default "/home/swanson/.docker")
      -D, --debug              Enable debug mode
      -H, --host list          Daemon socket(s) to connect to
...
```

#### Use Docker for Windows (on Windows if you don't have Intel VT-X or AMD-V support)

Follow directions here: https://docs.docker.com/docker-for-windows/

### Start a Docker Container

This only applies if you are running docker on your own machine (i.e., not on ieng6).  If you are running on ieng6, then you should skip this.

The docker image you'll be using is `ucsdnvsl/CSE141pp:latest`.

You can start it from the command line with `docker run -it ucsdnvsl/cse141pp:latest`.

It may take a while the first time (the docker image is about 9GB), but you should eventually find yourself in a shell. 

**NOTE**: This is very important:  With the command above, none of your work work will be saved when the container exits.  You have several choices:

1. Always commit and push your code to github and re-clone it when you start docker.

2. Use the campus-provider docker facilities in which case you should also commit your work frequently.  Don't rely on the data on those machines being persistent.

3. Use the `--volume` option to give your docker container access to the files from outside of docker.

For example, this command line:

```
docker run -it --volume $HOME:/home/ -w /home --env HOME=/home ucsdnvsl/cse141pp:latest
```

Does the following,

* `-it` makes the docker container interactive.
* `--volume $HOME:/home` will make your home directory appear inside docker as `/home`.
* `-w` will make your working directory inside docker be `/home`.
* `--env HOME=/home` sets your home directory to `/home`.

So that I can do the following (the `root@0d67aa337a42:` prompt means I'm inside the container):

```
root@packet-devel1-test:~# cd $HOME
root@packet-devel1-test:~# ls
cse141pp-archlab  CSE141pp-Config  CSE141pp-Resources  CSE141pp-SimpleCNN  gradescope.zip  labs  old  python-docs-samples  swanson  t  test  toy.cpp  tt
root@packet-devel1-test:~# docker run -it --volume $HOME:/home/ -w /home --env HOME=/home ucsdnvsl/cse141pp:latest
root@0d67aa337a42:~# ls
CSE141pp-Config  CSE141pp-Resources  CSE141pp-SimpleCNN  cse141pp-archlab  gradescope.zip  labs  old  python-docs-samples  swanson  t  test  toy.cpp  tt
root@0d67aa337a42:~# touch hello-world
root@0d67aa337a42:~# exit
exit
root@packet-devel1-test:~# ls
cse141pp-archlab  CSE141pp-Config  CSE141pp-Resources  CSE141pp-SimpleCNN  gradescope.zip  hello-world  labs  old  python-docs-samples  swanson  t  test  toy.cpp  tt
root@packet-devel1-test:~#
```

Note that I can see the contents of my home directory from inside
docker, and changes I make inside remain after I exit.  You may need
to tweak the command to suit you needs.
