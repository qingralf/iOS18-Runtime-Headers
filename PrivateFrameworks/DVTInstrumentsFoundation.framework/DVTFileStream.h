/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DVTInstrumentsFoundation.framework/DVTInstrumentsFoundation
 */

@interface DVTFileStream : NSObject <DVTInputStream> {
    unsigned long long  _currentRead;
    NSFileHandle * _fileHandle;
    unsigned long long  _fileSize;
    NSURL * _fileURL;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) NSFileHandle *file;
@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsPeek;

- (void).cxx_destruct;
- (void)_updateFileSize;
- (id)file;
- (id)fileURL;
- (bool)hasData;
- (id)initWithURL:(id)arg1;
- (id)peek:(unsigned long long)arg1 error:(id*)arg2;
- (id)read:(unsigned long long)arg1 error:(id*)arg2;
- (id)readToEnd:(id*)arg1;
- (bool)supportsPeek;

@end
