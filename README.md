# CSE142L Home Page

This is the starting point for CSE142L.

## Lecture Slides

Available via google drive: https://drive.google.com/drive/folders/1gFFuPf5g9cWTitaSnSkB_guuTMtvtuQI?ths=true

## Labs

Due dates are set in gradescope.  Look for them there.

**Note** The links below won't work until the labs are released.

|Number | Name | Invite Link | PDF | Released? |
|-------|------|-------------|-----|-----------|
| 1  | The Performance Equation | [invite](https://classroom.github.com/a/zW7ZfuFB) |  [pdf](https://raw.githubusercontent.com/CSE142/Home/master/pdfs/Lab_1.pdf) | yes | 
| 2  | The Compiler | [invite](https://classroom.github.com/a/32LX0vTl) | [pdf](https://raw.githubusercontent.com/CSE142/Home/master/pdfs/Lab_2.pdf)| yes | 
| 3  | Caches | [invite](https://classroom.github.com/a/3wedq9t2) | [html](https://cse142.github.io/Home/caches/Lab.reading.html) | yes |
| 4  | Caches II | [invite]() |  [pdf]()|  Not yet |
| 5  | Parallelism  | [invite]() | [pdf]()|Not yet |


# Reading Quizzes

For the reading quiz (check the syllabus for due dates), you just need the pdf from the link above.  The invite link to get access to the actual lab may not work before class meets.

The PDF is long, but you don't need to read all of it.  There are instructions in the file about what to read for the reading quiz.  Following them will save you a bunch of time.

# Software You Will Need

**Note** Safari and Internet Explorer are not currently supported.  You should use Chrome
(first choice, most tested) or Firefox.  Edge Seems to be ok.

All your work for the class will be done within Juptyer Notebook running in a Docker container.

Docker containers are self-contained Linux-based workspaces.  Using docker
ensures that your code runs in a consistent environment for you and the
autograder/course staff.

Jupyter Notebook is an interactive computing enviroment for gathering and
displaying data (among other things).

The content for each lab will be distributed via github classroom.

So, to do the course, you need:

1. You'll need to log into datahub.ucsd.edu to run a jupyter notebook. 
2. Tha lab from github classroom.  Find the link on the course home page: https://github.com/CSE141pp/Home/.

## Connecting to UCSD Datahub

The first step is to visit

https://datahub.ucsd.edu/ 

![Log into datahub](images/log-into-datahub.gif)

One of two things will happen:

1. You'll find yourself at a nice home page and you can click the big golden "Log In" button. 

2. If you've used the system before/recently it might drop you directly into a jupyter notebook file browser.

If you it's #2, you will need to click "Control Panel" (upper right) and then
click the big red "Stop My Server" button, if it's there.  If it's not, that's
fine.  Then click "Logout" (upper right) to get back to the homepage and the
big golden button.

Now, click the big golden button and login with your `@ucsd.edu` email address.You'll be presented with a list of Course Environments to choose from.  Select the one for `CSE 142L - Software Proj Comp Arch - Swanson [FA22] - Lab 1` (if you're doing Lab 1).

After a progress bar, you'll end up at the Jupyter Notebook file browser.
Looking at an empty directory (unless you've used the Datahub before, in which
case your old files will be there).  In any case, you don't have a lab to do
yet.

You can now proceed with the instructions below for cloning the lab repo.  Once
you complete them, you can return to the Jupyter Notebook file browser and open
your lab notebook.

### Important Note

Datahub tries to keep your session alive, so if you navigate away and then come
back later, your notebook will still be there and it will initially seem to be
working, but then commands in the notebook will start failing and complaining
about "stale file handles". If this happens, you need to go to "control panel"
and stop your server and then restart it.

## Setting up SSH

You'll need to open a terminal from data hub.  From the file browser, lect "new->terminal" from the menu in the upper right.
At the resulting Linux prompt, you can `git clone` the repo locally.

![Log into datahub](images/open-terminal-short.gif)

You may need to create an ssh key and add it to your github account.  You can create the key with (in your datahub terminal):

```
ssh-keygen -t ed25519 
```

and accept the defaults.  I recommend no password, so you don't have to type it all the time.

Then view your new public key:

```
cat ~/.ssh/id_ed25519.pub
```

Then follow these instructions to tell github about it:

https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account

## Cloning the Lab Repo

First, accept the assignement on Github Classroom.  It's available at the top of this page.

This will set you up with a copy of the starter repository.

**Note**: Be sure to use the **`ssh`** method to checkout your repo rather than `http`.  Http is pretty hard to use now on github.

You can now clone your repo with 

```
git clone <your lab url>
```

![clone with ssh](images/clone-with-ssh.png)

## Open the Notebook

Switch to the tab with file browser and navigate to the directory you just cloned.   Click on `Lab.ipynb` to open the lab and get to work!

**Note:** You'll need to trust the notebook when Jupyter asks.


## Tip and Tricks

1. [Change github accounts on gradescope](use-a-different-github-account.md)


