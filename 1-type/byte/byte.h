unsigned char max_byte(unsigned short number) {
    unsigned char b = (unsigned char)number;
    unsigned char c = (unsigned char)(number >> 8);
    if (b > c) return b;
    else return c;
}
