/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncStateStore : NSObject <HDCloudSyncStateStore> {
    unsigned long long  _aggregateMergedDataLength;
    NSMutableDictionary * _mergedData;
    NSDictionary * _stateData;
}

@property (nonatomic) unsigned long long aggregateMergedDataLength;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *mergedData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)aggregateMergedDataLength;
- (bool)data:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1;
- (id)mergedData;
- (void)setAggregateMergedDataLength:(unsigned long long)arg1;
- (bool)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)unitTest_setMergedData:(id)arg1;

@end