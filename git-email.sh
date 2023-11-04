#!/bin/sh
git filter-branch --env-filter '
OLD_EMAIL="cheng.long@greendotcorp.com"
CORRECT_NAME="LuoReid"
CORRECT_EMAIL="luo.reid@gmail.com"
if [ "$GIT_COMMITTER_EMAIL" = "$OLD_EMAIL" ]
then
    export GIT_COMMITTER_NAME="$CORRECT_NAME"
    export GIT_COMMITTER_EMAIL="$CORRECT_EMAIL"
fi
if [ "$GIT_AUTHOR_EMAIL" = "$OLD_EMAIL" ]
then
    export GIT_AUTHOR_NAME="$CORRECT_NAME"
    export GIT_AUTHOR_EMAIL="$CORRECT_EMAIL"
fi
' --tag-name-filter cat -- --branches --tags

# chmod +x git-email.sh
# ./git-email.sh
# git push origin --force --all

# way 2 
# git rebase -i commit id
# pich commit to edit then save exit
# git commit --amend --author="name <name@email>" --no-edit
# git rebase --continue
