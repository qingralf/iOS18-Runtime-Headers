/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMusicCuratorConfigurationWrapper : NSObject {
    void configuration;
}

@property (nonatomic, readonly) long long audioFilePrefetchThresholdInDays;
@property (nonatomic, readonly) long long metadataPrefetchThresholdInDays;

+ (id)defaultConfiguration;
+ (id)memoryCreationConfiguration;

- (long long)audioFilePrefetchThresholdInDays;
- (id)init;
- (long long)metadataPrefetchThresholdInDays;

@end
