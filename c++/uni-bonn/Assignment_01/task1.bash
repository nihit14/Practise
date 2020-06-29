echo "In order to run the script succesfully, run the script from within the data folder"
# Count how many lines are there in “data.dat”.
a=($(wc -l  data.dat)[1])
echo "Number of lines in the given file: "  $a


# Count how many lines of those contain “dolor” or “dalor”? 
b=$(grep d[ao]lor -w data.dat |wc -l)
echo "Number of lines that contains 'dolor' or 'dolar': " $b

# Count how many words are there in “data.dat”?
c=($(wc -w data.dat)[1])
echo "Total number of words in given file: " $c

#Count how many of those start with “mol”?
d=$(grep "\<mol"  data.dat |wc -l )
echo "Number of words that contains mol in the starting: " $d
#Count how many files in “test folder” are “.txt” files?
e=$(ls test_folder/*.txt  |wc -l)
echo "Number of files in a given folder that has txt as extension: " $e