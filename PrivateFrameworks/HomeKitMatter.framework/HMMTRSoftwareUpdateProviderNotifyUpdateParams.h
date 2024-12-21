/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter
 */

@interface HMMTRSoftwareUpdateProviderNotifyUpdateParams : NSObject {
    NSNumber * _didTimeout;
    NSNumber * _linkTypeForMetrics;
    NSNumber * _previousSoftwareVersionNumberForMetrics;
    NSNumber * _softwareVersion;
    NSData * _updateToken;
}

@property (readonly) NSNumber *didTimeout;
@property (readonly) NSNumber *linkTypeForMetrics;
@property (readonly) NSNumber *previousSoftwareVersionNumberForMetrics;
@property (readonly) NSNumber *softwareVersion;
@property (readonly) NSData *updateToken;

- (void).cxx_destruct;
- (id)didTimeout;
- (id)initWithUpdateToken:(id)arg1 softwareVersion:(id)arg2 didTimeout:(id)arg3;
- (id)initWithUpdateToken:(id)arg1 softwareVersion:(id)arg2 linkTypeForMetrics:(id)arg3 previousSoftwareVersionNumberForMetrics:(id)arg4 didTimeout:(id)arg5;
- (id)linkTypeForMetrics;
- (id)previousSoftwareVersionNumberForMetrics;
- (id)softwareVersion;
- (id)updateToken;

@end