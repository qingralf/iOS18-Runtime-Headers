/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StorageKit.framework/StorageKit
 */

@interface SKPartitionTable : NSObject {
    SKDisk * _disk;
    struct __MKMedia { } * _mediaRef;
    NSMutableArray * _partitions;
    unsigned int  _sectorSize;
}

@property (retain) SKDisk *disk;
@property struct __MKMedia { }*mediaRef;
@property (nonatomic, retain) NSMutableArray *partitions;
@property unsigned int sectorSize;

+ (struct __MKMedia { }*)createMediaRefWithDisk:(id)arg1 error:(id*)arg2;
+ (id)partitionIDFromDisk:(id)arg1;
+ (bool)updatePartitionTypeWithPartitions:(id)arg1 partID:(id)arg2 newType:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)allocateMediaRef:(id*)arg1;
- (void)dealloc;
- (id)disk;
- (bool)fitToContainerSize:(unsigned long long)arg1 error:(id*)arg2;
- (void)flushMediaRef;
- (id)initWithDisk:(id)arg1 error:(id*)arg2;
- (struct __MKMedia { }*)mediaRef;
- (bool)overwriteExistingMediaLayout:(id)arg1 opts:(struct __CFDictionary { }*)arg2 partitionScheme:(int)arg3;
- (bool)overwriteExistingMediaLayout:(id)arg1 opts:(struct __CFDictionary { }*)arg2 partitionScheme:(int)arg3 size:(unsigned long long)arg4;
- (bool)overwritePartitionAt:(id)arg1 filesystem:(id)arg2 error:(id*)arg3;
- (id)partitions;
- (bool)resizePartitionID:(id)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned int)sectorSize;
- (void)setDisk:(id)arg1;
- (void)setMediaRef:(struct __MKMedia { }*)arg1;
- (void)setPartitions:(id)arg1;
- (void)setSectorSize:(unsigned int)arg1;
- (bool)writeNewMediaLayout:(id)arg1 partitionScheme:(unsigned long long)arg2;
- (bool)writePartitionScheme:(unsigned long long)arg1 error:(id*)arg2;

@end
