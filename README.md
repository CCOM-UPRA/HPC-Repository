#### Git & GitHub:

###### Basic commands:
- `git init`:
	- creates a local repository in the current directory
- `git status`:
	- displays the current state of the working directory
	- shows file changes
	- ![alt text](image.png)
- `git add <file names>`:
	- sends files to the staging area
	- staging area - a place where files sit waiting to be committed
- `git commit -m "message" <file names>`:
	- Records a snapshot of the current state of the files in the staging area, creating a new commit in the repository
	- commits can be viewed, modified or reverted
- `git log`:
	- displays commit history
	- shows the author, date, message and hash of the commit
	- the hash is important since it is used to reference, inspect or manipulate specific commits
- `git pull`:
	- fetches changes from a remote repository into your local repository branch

###### Clone a repository:
- Head to the repository you want to clone and click the green code button:
![alt text](image-1.png)
- copy the HTTPS address:
![alt text](image-2.png)
- run the following command on your home directory: `git clone https://github.com/CCOM-UPRA/HPC-Repository.git`:

###### Push to a remote repository:
- Get Personal access token from GitHub
	- In the top-right corner click your profile icon
	- Click:
	  - ![image](https://github.com/messiel12pr/CSSA-UPRA/assets/95717805/ef0f8d31-98df-468e-90ed-85c1fd796ed8)
	- In the menu bar to your left click:
	  - ![image](https://github.com/messiel12pr/CSSA-UPRA/assets/95717805/aab20928-08e3-4903-bf44-f923c788cb86)
	- In Personal access tokens click Tokens (classic):
	  - ![image](https://github.com/messiel12pr/CSSA-UPRA/assets/95717805/e53a6d3b-11a8-4cda-a283-7113644e7d96)
	- In Generate new token click Generate new token (classic):
	  - ![image](https://github.com/messiel12pr/CSSA-UPRA/assets/95717805/3d270ebb-bd77-42a6-97d0-e7bcb4d5a0a4)
	- Now add a note and check the repo box:
	  - ![image](https://github.com/messiel12pr/CSSA-UPRA/assets/95717805/ff543324-f838-436b-9d98-e1fdef75fe1a)
	- Click:
	  - ![image](https://github.com/messiel12pr/CSSA-UPRA/assets/95717805/25c0580c-90b6-4b89-9041-222c948d8b95)
	- Copy the token and save it in a text file. Do not share this with anyone.
- `git push`:
	- sends commits from your local repository to its corresponding remote repository
	- when asked for the username enter your GitHub username
	- when asked for the password enter your personal access token