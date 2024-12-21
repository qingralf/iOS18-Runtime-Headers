/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices
 */

@interface PRSPosterDescriptor : NSObject <BSXPCSecureCoding> {
    PFPosterPath * _path;
    <BSInvalidatable> * _pathValidityExtension;
}

@property (nonatomic, readonly) PFPosterPath *_path;
@property (nonatomic, readonly, copy) NSURL *assetDirectory;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *role;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPath:(id)arg1;
- (id)_path;
- (id)assetDirectory;
- (void)dealloc;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)loadUserInfoWithError:(out id*)arg1;
- (id)role;

@end