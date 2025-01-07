int main() {
    for (int i = 0; i < 11; i++) {
        symbolTaken[i] = 0; // Initialize symbols as not taken
    }

    printf("Enter the number of candidates: ");
    scanf("%d", &candidateCount);

    if (candidateCount >= MAX_C) {
        printf("Number of candidates cannot be greater than 10.\n");
        return 0;
    }

    for (int i = 0; i < candidateCount; i++) {
        fillCandidate(i); // Add candidate details
    }

    int numVoters;
    printf("Enter the number of voters: ");
    scanf("%d", &numVoters);

    for (int i = 0; i < numVoters; i++) {
        getVotes(i); // Collect votes from voters
    }

    getResults(); // Display results

    return 0;
}
