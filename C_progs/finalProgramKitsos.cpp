/*
 * finalProgramKitsos.cpp
 * 
 * Copyright 2018 penjo <penjo@vik3rn35>
 *  Θέμα 1ο (3M)

Μια τράπεζα θα καταγράφει στοιχεία για 1000 πελάτες. Πιο συγκεκριμένα θα πρέπει να καταγράφονται
Αύξοντα αριθμός-id (από το 1 - 1000)
Φύλο (Μόνο Μ ή m ή F ή f)
Ηλικία (0 - 120)
Μορφωτικό επίπεδο (P, D, T για πρωτοβάθμια δευτεροβάθμια και τριτοβάθμια εκπαίδευση)
Δημιουργήστε ένα πρόγραμμα που θα καταγράφει τα παραπάνω στοιχεία
Δημιουργείστε μια βιβλιοθήκη που θα διαθέτει τις εξής συναρτήσεις
CheckAge()
CheckGender()
CheckStudies()
Οι οποίες θα καλούνται για να κάνουν τους αντίστοιχους ελέγχους εγκυρότητας

Θέμα 2ο (3M)
Ταξινομήστε τους παράλληλους πίνακες ως προς την ηλικία και στην συνέχεια αποθηκεύστε τα δεδομένα σε ένα αρχείο data.txt που θα έχει την εξής μορφή:
Id     Age    Gender        Studies

Θέμα 3ο (4M)
Με χρήση της βιβλιοθήκης που έχετε κατασκευάσει, θα δημιουργήσετε συναρτήσεις που θα υπολογίζουν:
MO ηλικίας
Ποσοστό αντρών  που ανήκουν στην τριτοβάθμια εκπαίδευση επι του συνόλου
Το id της μέγιστης και της ελάχιστης ηλικίας
Τα στοιχεία θα καταγράφονται σε ένα txt αρχείο με όνομα info.txt. μαζί με τα παραπάνω στοιχεία θα καταγράφεται η ημερομηνία δημιουργίας του αρχείου, καθώς και ο χρόνος ταξινόμησης των πινάκων (θέμα 2ο)
 */


#include <stdio.h>
#include "kitsos.h"

int main()
{
	int n;
	
	printf("How many people you want to record? : ");
	scanf(" %d", &n);

	int personId[n], age[n];
	char gender[n], edu[n];
	
	data(personId,age,gender,edu,n);
	printf("\n");
	
	return 0;
}

