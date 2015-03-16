# CW

/!\ Please be sure to commit in the branch of your team. /!\
/!\ Please do not merge on master branch !! /!\

How to create a branch:
  Branch [NAME]
  
How to work on a specific branch:
  git checkout [BRANCH_NAME]

How to pull with a selected branch:
  git add --all
  git commit -am [MESSAGE]
  git pull origin [BRANCH_NAME]

How to update the master branch with your own branch:
  git checkout master ("master" is the default branch)
  git merge [BRANCH_NAME]

How to see the changement between your files and the remote repository:
  git diff origin/[BRANCH_NAME] (ex: git diff origin/master)

How to see all the commited changes on your branch:
  git diff origin/[BRANCH_NAME] (ex: git diff origin/master)
  
-> Remember that when you're working at a specific branch (after doing "git checkout [BRANCH_NAME]), you can avoid the target on your git commands. For example your can "git checkout master", and then use the git command like this:

 * git diff
 * git log
 * git pull
 * etc..

Epitech project : CoreWar.
By Léo, Florian, Pierre & Johann. (Promotion 2019).
