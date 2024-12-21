/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSElementTargetingResult : NSObject {
    NSMutableSet * _globalElements;
    NSMutableSet * _perSiteElements;
    _WKTargetedElementInfo * _target;
}

@property (getter=isBackedByGlobalAction, nonatomic, readonly) bool backedByGlobalAction;
@property (nonatomic, readonly) _WKTargetedElementInfo *target;

- (void).cxx_destruct;
- (void)_forEachPotentiallySimilarElement:(id /* block */)arg1;
- (void)addElement:(id)arg1;
- (void)checkForSimilarRenderedText:(id /* block */)arg1;
- (long long)computeURLSimilarity:(id*)arg1;
- (bool)hasSimilarGeometryInView:(id)arg1;
- (id)initWithTarget:(id)arg1 element:(id)arg2;
- (bool)isBackedByGlobalAction;
- (id)target;

@end