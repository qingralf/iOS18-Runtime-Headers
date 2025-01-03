/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiatorVideoConfiguration : VCMediaNegotiatorCommonConfiguration <NSCopying> {
    NSDictionary * _videoFeatureStrings;
    NSDictionary * _videoFeatureStringsFixedPosition;
    VCVideoRuleCollections * _videoRuleCollections;
}

@property (nonatomic, retain) NSDictionary *videoFeatureStrings;
@property (nonatomic, retain) NSDictionary *videoFeatureStringsFixedPosition;
@property (nonatomic, retain) VCVideoRuleCollections *videoRuleCollections;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)isEqual:(id)arg1;
- (bool)isEqualFeatureStrings:(id)arg1;
- (void)setVideoFeatureStrings:(id)arg1;
- (void)setVideoFeatureStringsFixedPosition:(id)arg1;
- (void)setVideoRuleCollections:(id)arg1;
- (id)videoFeatureStrings;
- (id)videoFeatureStringsFixedPosition;
- (id)videoRuleCollections;

@end
