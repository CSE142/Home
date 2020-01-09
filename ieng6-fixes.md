# Working Around the Limitations of ieng6

ieng6 is nice because it's supported by campus, but the fact that the docker container it gives is transient is a pain.

Here is what I do to make it (and any other random system I need to log into) easier to use to.

## Personal Setup Script

I keep a public repo in my github acccount: https://github.com/stevenjswanson/myconfig

The `README.md` has this (which is easy to copy and paste):

```
curl https://raw.githubusercontent.com/stevenjswanson/myconfig/master/setup.sh | bash
```

Which will download the `setup.sh` file in the same repo and run it in bash.

`setup.sh` does whatever I need to make myself comfortable in a system I don't usually use.  In particular, it sets my identity for git and setups credential caching.

You could add a command to pull your repos.

## Screen

The `screen` tool allows your terminal session to survive even if you are disconnected.

It's intalled on ieng6.  Do 

``` 
man screen
```

To learn how to use it.
