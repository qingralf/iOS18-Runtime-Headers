/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICTTCRVectorTimestamp : ICTTVectorTimestamp {
    ICCRVectorTimestamp * _crTimestamp;
}

@property (nonatomic, retain) ICCRVectorTimestamp *crTimestamp;

- (void).cxx_destruct;
- (id)allUUIDs;
- (id)clockElementForUUID:(id)arg1;
- (unsigned long long)clockForUUID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crTimestamp;
- (id)init;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (void)setCrTimestamp:(id)arg1;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)arg1;

@end
