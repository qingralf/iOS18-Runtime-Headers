/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFVMData : NSData {
    int  _cd_rc;
    unsigned long long  _length;
    void * _payload;
}

+ (Class)classForKeyedUnarchiver;

- (const void*)bytes;
- (Class)classForCoder;
- (void)dealloc;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)length;

@end
