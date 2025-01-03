/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {
    void * _bytes;
    unsigned long long  _capacity;
    int  _fd;
    bool  _flush;
    unsigned long long  _flushFrom;
    bool  _immutable;
    unsigned long long  _length;
    unsigned long long  _mappedLength;
    char * _path;
    unsigned long long  _threshold;
    bool  _vm;
}

- (void)_flushToDisk:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (void)_mapMutableData:(bool)arg1;
- (void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)appendData:(id)arg1;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (unsigned long long)length;
- (bool)mf_immutable;
- (void)mf_makeImmutable;
- (void*)mutableBytes;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setMappingThreshold:(unsigned int)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
