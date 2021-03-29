# CSE142L Home Page

This is the starting point for CSE142L.

## Lecture Slides

Available via google drive: https://drive.google.com/drive/folders/1uSgifPM0FluKMH0OcjHQzwUiI_vCrMEp?usp=sharing

## Labs

Due dates are set in gradescope.  Look for them there.

**Note** The links below are disabled until the lab is released (typically around class time).

**Note** The importing process in GitHub Classroom can take a surprisingly long time.  Be patient.

| Number | Name   | Github classroom invitation link        | Starter Repo | 
|--------|--------|-----------------------------------------|---------------|
| 1      | Intro  | [Link](https://classroom.github.com/a/GM3LVy_C) |               |
| 2      | Characterizing  |                                |               |
| Olympics1 | Pipeline Olympics |                           |               |
| 3      | Caches  |                                        |               |
| 4      | Threads |                                        |               |
| F1     | Final   |                                        |               |


## Pulling Updates

Occasionally, we find bugs in the starter repo and push updates to it.  For important changes, we will post to piazza.  For minor clarification, we might not.  There are two ways to be kept up to date, regardless.  First, you can "watch" the starter repo by clicking the "watch" button at the top of it's home page on github.

Second, every time you run `runlab` it will check for updates.  To check explicitly, you can do

```
runlab --info
```

Which might generate

```
===================================================================
# The lab starter repo has been changed.  The diff follows.
# Do `runlab --merge-updates` to merge the changes into your repo.
diff --git a/README.md b/README.md
index 700cbaa..d5b2309 100644
--- a/README.md
+++ b/README.md
@@ -3,7 +3,7 @@
 In this lab you will set up the lab environment and learn how to gather
 information about programs using the course tools.  You will download
 some starter code, build and run it in a Docker container, modify the
-code and push the changes to a git repo.  Run the code in the cloud on
+code, and push the changes to a git repo.  Run the code in the cloud on
 our reference processor to gather some data.
```

Then you can do 

``` 
runlab --merge-updates
```

to integrate the changes into your repo.  After which you could do:

```
runlab --info
```

and see

```
No updates available for this lab.
INFO               :
=======            :
lab_name           : Introduction to the Development Environment
short_name         : intro
...
```

## Being Notified Of Changes to the Lab

If you want to be notified whenever we update the lab, subscribe to commit messages for the starter repo on github.

## Tip and Tricks

1. [Getting Docker Running On Your Machine](Getting-Docker.md)
2. [Runlab Quick Reference](runlab-quickref.md)
3. [Type your github password less](https://help.github.com/en/github/using-git/caching-your-github-password-in-git)
4. [Working around the limitations of ieng6](ieng6-fixes.md)
5. [Change github accounts no gradescope](use-a-different-github-account.md)


