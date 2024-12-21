/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightKnowledge.framework/SpotlightKnowledge
 */

@interface FileEntry : NSObject {
    NSString * _filePath;
    unsigned long long  _fileSize;
    unsigned long long  _journalNumber;
}

@property (nonatomic, copy) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long journalNumber;

- (void).cxx_destruct;
- (id)filePath;
- (unsigned long long)fileSize;
- (id)initWithFilePath:(id)arg1 journalNumber:(unsigned long long)arg2 fileSize:(unsigned long long)arg3;
- (unsigned long long)journalNumber;
- (void)setFilePath:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setJournalNumber:(unsigned long long)arg1;

@end