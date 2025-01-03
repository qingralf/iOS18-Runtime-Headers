/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAssetStateMatcher : NSObject <SUAssetMatcher> {
    NSString * _assetType;
    int  _interestedStates;
    NSDictionary * _matcherInfo;
}

@property (nonatomic, readonly) NSString *assetType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int interestedStates;
@property (nonatomic, readonly) NSDictionary *matcherInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2;
- (bool)_matchesFilterType:(id)arg1;
- (void)_modifyMADownloadOptions:(id)arg1;
- (id)assetType;
- (id)findMatchFromCandidates:(id)arg1 error:(id*)arg2;
- (id)initWithType:(id)arg1 interestedStates:(int)arg2;
- (int)interestedStates;
- (id)matcherInfo;
- (void)modifyMADownloadOptions:(id)arg1;

@end
