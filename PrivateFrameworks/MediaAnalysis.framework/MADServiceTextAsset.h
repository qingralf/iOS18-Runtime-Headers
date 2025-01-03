/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface MADServiceTextAsset : NSObject {
    NSString * _clientBundleID;
    NSString * _clientTeamID;
    NSArray * _textInputs;
}

@property (nonatomic, readonly) NSString *clientBundleID;
@property (nonatomic, readonly) NSString *clientTeamID;
@property (nonatomic, readonly) NSArray *textInputs;

+ (id)assetWithTextInputs:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3;

- (void).cxx_destruct;
- (id)clientBundleID;
- (id)clientTeamID;
- (id)initWithTextInputs:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3;
- (id)textInputs;

@end
