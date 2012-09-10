//
//  file.h
//  Lab 1
//
//  Created by Lucas Wiener on 9/10/12.
//  Copyright (c) 2012 skola. All rights reserved.
//

#ifndef Lab_1_file_h
#define Lab_1_file_h

struct wordpair {
    char *text;
    int index;
};

FILE* openfile(const char *filename, const char *mode);
char* readline();

wordpair readPairByLine(int line);

#endif
