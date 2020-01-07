# Runlab Quick Reference

In our class, we are heavily using the tool runlab.  Here are some common commands that might be useful to use as well as how to interpret common error messages.

## Common Commands

* `runlab` -- Compile and run your current version of the lab.

* `runlab --help` -- get help!

* `runlab --info` -- get info about the current lab.

* `runlab --no-validate` -- Compile and run even if you haven't committed/pulled your changes.

## Common Error Messages

### Uncommitted/Pulled Changes

```
ERROR    You have uncommitted changes and/or there is changes in github that you don't have locally.  This means local behavior won't match what the autograder will do.
ERROR    To run anyway, pass '--no-validate'.  Alternately, to mimic the autograder as closely as possible (and require committing your files), do '--pristine'
```

Your local copy is not synced with github.  

**Solution**:  `runlab --no-validate`

