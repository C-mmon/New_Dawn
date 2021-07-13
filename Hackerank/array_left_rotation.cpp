for(int i = 0; i < lengthOfArray; i++){
    int newLocation = (i + (lengthOfArray - shiftAmount)) % lengthOfArray;
    a[newLocation] = in.nextInt();
}
