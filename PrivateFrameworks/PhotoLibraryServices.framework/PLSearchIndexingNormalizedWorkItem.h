/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexingNormalizedWorkItem : NSObject {
    unsigned long long  _entityToIndex;
    NSString * _identifier;
    long long  _jobFlags;
    short  _jobType;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) unsigned long long entityToIndex;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long jobFlags;
@property (nonatomic, readonly) short jobType;
@property (nonatomic, readonly, copy) NSDate *timestamp;

+ (id)coalesceWorkItemA:(id)arg1 itemB:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)entityToIndex;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 jobType:(short)arg2 jobFlags:(long long)arg3 entityToIndex:(unsigned long long)arg4 timestamp:(id)arg5;
- (bool)isInsert;
- (bool)isRemoval;
- (long long)jobFlags;
- (short)jobType;
- (id)timestamp;

@end
