# CSE141L Home Page

This is the starting point for CSE141L.

## Lecture Slides

Available via google drive: https://drive.google.com/drive/folders/1uSgifPM0FluKMH0OcjHQzwUiI_vCrMEp?usp=sharing

## Labs

Due dates are set in gradescope.  Look for them there.

**Note** The links below are disabled until the lab is released (typically around class time).

**Note** The importing process in GitHub Classroom can take a surprisingly long time.  Be patient.

| Number | Name   | Section A Github classroom link         | Section B Github classroom link         | 
|--------|--------|-----------------------------------------|-----------------------------------------|
| 1      | Intro  | [link](https://classroom.github.com/a/IjkqbBTv) | [link](https://classroom.github.com/a/-VPj3rda) |
| 2      | Characterizing  |[link](https://classroom.github.com/a/S1PAs7SE) | [link](https://classroom.github.com/a/tV9Oz_P4) |
| Olympics1 | Pipeline Olympics | [link](https://classroom.github.com/a/sDstmQly) | [link](https://classroom.github.com/a/EMftLy7H) |
| 3      |   |    | |
| 4      |   |    | |
| 5      |   |    | |
| 6      |   |    | |
| 7      |   |   | |
| F1      |   |    | |
| F2     |   |   | |

## Pulling Updates

Occasionally, we find bugs in the starter repo and push updates to it.  To get them you need to 'fetch from upstream' using git.  The first time you do this you need to do:

```git remote add upstream <starter repo>```

Where `starter repo` is the url as your repo but with your username replaced with `starter`.  

For example, instead of 

```
https://github.com/CSE141pp/wi20-CSE141L-intro-stevenjswanson.git
```

It would be 

```
https://github.com/CSE141pp/wi20-CSE141L-intro-starter.git
```

Then, each time I push a new update (and announce it on Piazza) you should do this:

```
git fetch upstream
```

To pull the changes.  Then you can do:

```
git diff upstream/master
```

To see what's changed.

And finally,

```
git merge remotes/upstream/master
git push
```

To merge the changes into your repo and push the results back to your repo on github.

## Tip and Tricks

1. [Getting Docker Running On Your Machine](Getting-Docker.md)
2. [Runlab Quick Reference](runlab-quickref.md)
3. [Type your github password less](https://help.github.com/en/github/using-git/caching-your-github-password-in-git)
4. [Working around the limitations of ieng6](ieng6-fixes.md)
5. [Change github accounts no gradescope](use-a-different-github-account.md)


