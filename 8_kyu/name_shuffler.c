/*
Write a function that returns a string in which firstname is swapped with last name.

Example(Input --> Output)

"john McClane" --> "McClane john"
*/

char *name_shuffler (char *shuffled, const char *name)
{
  int i = 0;
  int j = 0;
  int space = 0;
  
  while (name[i] && name[i] != ' ')
    i++;
  if (!name[i])
    return (shuffled);
  while (name[++i])
    shuffled[j++] = name[i];
  shuffled[j++] = ' ';
  i = 0;
  while (name[i] && name[i] != ' ')
    shuffled[j++] = name[i++];
	shuffled[j] = '\0';
	return (shuffled);
}

/*
Step 1: Identify Spaces Between First and Last Name
	Since the input string has two words separated by a space, we need to find the first space in the string.
Step 2: Extract the Last and First Names
	Everything before the space is the first name.
	Everything after the space is the last name.
Step 3: Copy the Last Name First
	Copy the last name into shuffled.
	Add a space after copying the last name.
Step 4: Copy the First Name After the Space
	Append the first name after the space.
Step 5: Ensure Proper String Termination
	Add '\0' at the end to properly terminate the string.

Optimized Approach
	Find the space (' ') in one pass (instead of a separate loop).
	Copy the last name first, then a space, and finally the first name.
	Minimize variable use and avoid redundant checks.
*/