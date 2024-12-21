/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKTargetedElementInfo : NSObject <WKObject> {
    struct ObjectStorage<API::TargetedElementInfo> { 
        struct type { 
            unsigned char __lx[208]; 
        } data; 
    }  _info;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsInClientCoordinates;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsInWebView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAudibleMedia;
@property (nonatomic, readonly) bool hasLargeReplacedDescendant;
@property (readonly) unsigned long long hash;
@property (getter=isInShadowTree, nonatomic, readonly) bool inShadowTree;
@property (getter=isInVisibilityAdjustmentSubtree, nonatomic, readonly) bool inVisibilityAdjustmentSubtree;
@property (nonatomic, readonly) NSSet *mediaAndLinkURLs;
@property (getter=isNearbyTarget, nonatomic, readonly) bool nearbyTarget;
@property (nonatomic, readonly) unsigned long long offsetEdges;
@property (nonatomic, readonly) long long positionType;
@property (getter=isPseudoElement, nonatomic, readonly) bool pseudoElement;
@property (nonatomic, readonly, copy) NSString *renderedText;
@property (nonatomic, readonly) bool safari_isOutOfFlow;
@property (nonatomic, readonly) bool safari_prefersImageAnalysisTextWhenCheckingSimilarity;
@property (nonatomic, readonly, copy) NSArray *safari_selectorsForStyleSheetRules;
@property (nonatomic, readonly) NSArray *safari_uniqueSelectorsIncludingShadowHosts;
@property (nonatomic, readonly, copy) NSString *screenReaderText;
@property (nonatomic, readonly, copy) NSString *searchableText;
@property (nonatomic, readonly, copy) NSArray *selectors;
@property (nonatomic, readonly, copy) NSArray *selectorsIncludingShadowHosts;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInClientCoordinates;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInWebView;
- (void)dealloc;
- (id)debugDescription;
- (void)getChildFrames:(id /* block */)arg1;
- (bool)hasAudibleMedia;
- (bool)hasLargeReplacedDescendant;
- (bool)isInShadowTree;
- (bool)isInVisibilityAdjustmentSubtree;
- (bool)isNearbyTarget;
- (bool)isPseudoElement;
- (bool)isSameElement:(id)arg1;
- (id)mediaAndLinkURLs;
- (unsigned long long)offsetEdges;
- (long long)positionType;
- (id)renderedText;
- (id)screenReaderText;
- (id)searchableText;
- (id)selectors;
- (id)selectorsIncludingShadowHosts;
- (void)takeSnapshotWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (bool)safari_coversWebView:(id)arg1;
- (void)safari_imageAnalysisTextWithCompletion:(id /* block */)arg1;
- (bool)safari_isOutOfFlow;
- (bool)safari_isProbablyFullPageModalOverlay:(id)arg1;
- (bool)safari_prefersImageAnalysisTextWhenCheckingSimilarity;
- (void)safari_renderedTextForCheckingSimilarityWithCompletion:(id /* block */)arg1;
- (id)safari_selectorsForStyleSheetRules;
- (id)safari_uniqueSelectorsIncludingShadowHosts;

@end