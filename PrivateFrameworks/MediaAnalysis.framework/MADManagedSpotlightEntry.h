/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface MADManagedSpotlightEntry : NSManagedObject

@property (nonatomic) int attemptCount;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) int mediaType;
@property (nonatomic, copy) NSDate *nextAttemptDate;
@property (nonatomic, copy) NSString *sandboxToken;
@property (nonatomic) int status;
@property (nonatomic, copy) NSString *typeIdentifier;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, copy) NSURL *url;

+ (unsigned long long)countForMediaType:(unsigned long long)arg1 error:(id*)arg2;
+ (bool)deleteEntryWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
+ (id)entryWithURL:(id)arg1 uniqueIdentifier:(id)arg2 bundleIdentifier:(id)arg3 typeIdentifier:(id)arg4 sandboxToken:(id)arg5 mediaType:(unsigned long long)arg6 error:(id*)arg7;
+ (id)fetchEntriesWithMediaType:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 error:(id*)arg3;
+ (id)fetchEntryWithUniqueIdentifier:(id)arg1 error:(id*)arg2;

- (id)description;

@end
