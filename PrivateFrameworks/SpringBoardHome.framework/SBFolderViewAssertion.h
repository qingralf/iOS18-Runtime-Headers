/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBFolderViewAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    long long  _assertionType;
    NSDictionary * _extraInfo;
    SBFolderView * _folderView;
    bool  _invalidated;
}

@property (nonatomic, readonly) long long assertionType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *extraInfo;
@property (nonatomic, readonly) SBFolderView *folderView;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)assertionType;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)extraInfo;
- (id)folderView;
- (id)initWithAssertionType:(long long)arg1 folderView:(id)arg2 extraInfo:(id)arg3;
- (void)invalidate;
- (bool)isInvalidated;
- (void)setInvalidated:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
