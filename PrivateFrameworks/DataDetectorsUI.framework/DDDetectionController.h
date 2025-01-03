/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDDetectionController : NSObject <UIActionSheetDelegate> {
    DDActionController * _actionController;
    BCSBusinessQueryService * _bizService;
    NSMapTable * _containerToContextsTable;
    NSMapTable * _containerToOperationsTable;
    NSMapTable * _containerToResultsTable;
    NSObject<DDDetectionControllerDelegate> * _delegate;
    NSOperationQueue * _fullScannerQueue;
    NSObject<OS_dispatch_queue> * _protectQueue;
    NSOperationQueue * _urlScannerQueue;
}

@property (nonatomic, retain) BCSBusinessQueryService *_bizService;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) NSObject<DDDetectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldConsiderResultForCoreRecents:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
+ (unsigned long long)allPublicTypes;
+ (id)barcodeContext:(id)arg1 preview:(bool)arg2 contact:(id)arg3 ics:(id)arg4;
+ (id)filterResults:(id)arg1 forTypes:(unsigned long long)arg2 referenceDate:(id)arg3 referenceTimeZone:(id)arg4;
+ (bool)largeScreenIdiom;
+ (id)lightUnderlineColorFromTextColor:(id)arg1;
+ (id /* block */)messagesActionHandler;
+ (void)setMessagesActionHandler:(id /* block */)arg1;
+ (id)sharedController;
+ (id)tapAndHoldSchemes;
+ (id)updateContext:(id)arg1 forResult:(struct __DDResult { }*)arg2 atIndex:(unsigned long long)arg3 ofStorage:(id)arg4;

- (void).cxx_destruct;
- (id)_URLForLinkAttributeValue:(id)arg1;
- (id)_applyBlock:(id /* block */)arg1 withResultsAtIndex:(unsigned long long)arg2 ofStorage:(id)arg3 context:(id)arg4;
- (id)_bizService;
- (id)_businessItemForNumber:(id)arg1 messageable:(bool*)arg2;
- (void)_cacheBusinessPhoneNumber:(id)arg1;
- (bool)_checkIfBusinessWithResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1 messageable:(bool*)arg2;
- (bool)_checkIfBusinessWithURL:(id)arg1 messageable:(bool*)arg2;
- (void)_commonResetResultsForContainer:(id)arg1;
- (void)_doURLification:(id)arg1;
- (void)_enqueueOperation:(id)arg1;
- (id)_ensureURLIsURL:(id)arg1;
- (void)_interactionDidStartForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
- (void)_interactionDidStartForURL:(id)arg1;
- (id)_newOperationForContainer:(id)arg1;
- (id)_phoneNumberFromResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
- (bool)_phoneNumberIsABusinessNumber:(id)arg1 messageable:(bool*)arg2;
- (id)_plainTextAugmentedContext:(id)arg1 withFrame:(id)arg2;
- (void)_resetStoredResultsForContainer:(id)arg1;
- (struct __DDResult { }*)_resultForAnchor:(id)arg1 forFrame:(id)arg2 context:(id*)arg3;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)_resultForIdentifier:(id)arg1 forContainer:(id)arg2 context:(id*)arg3;
- (struct __DDResult { }*)_resultForIdentifier:(id)arg1 withResults:(id)arg2 context:(id*)arg3;
- (id)_resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 subResult:(id*)arg3 url:(id*)arg4 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)_resultForURL:(id)arg1 forContainer:(id)arg2 context:(id*)arg3;
- (struct __DDResult { }*)_resultForURL:(id)arg1 withResults:(id)arg2 context:(id*)arg3;
- (bool)_shouldImmediatelyLaunchDefaultActionForURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg2;
- (bool)_shouldImmediatelyShowActionSheetForCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
- (bool)_shouldImmediatelyShowActionSheetForURL:(id)arg1;
- (void)_startCoalescedURLification:(id)arg1;
- (void)_startCoalescedURLification:(id)arg1 clearPreviousResults:(bool)arg2;
- (id)_subResultAtIndex:(unsigned long long)arg1 ofResult:(id)arg2;
- (bool)actionIsCancellable;
- (id)actionsAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)actionsForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (id)actionsForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)actionsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1 context:(id)arg2;
- (id)actionsForURL:(id)arg1;
- (id)actionsForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5;
- (id)attributedTitleForResult:(struct __DDResult { }*)arg1 updaterBlock:(id /* block */)arg2;
- (id)attributedTitleForResultAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 updaterBlock:(id /* block */)arg3;
- (id)attributedTitleForURL:(id)arg1 updaterBlock:(id /* block */)arg2;
- (id)barcodeActionsForContext:(id)arg1 URL:(id)arg2 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg3 contact:(id)arg4 ics:(id)arg5;
- (id)barcodeDefaultActionForContext:(id)arg1 URL:(id)arg2 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg3 contact:(id)arg4 ics:(id)arg5;
- (id)barcodePreviewActionForContext:(id)arg1 URL:(id)arg2 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg3 contact:(id)arg4 ics:(id)arg5;
- (void)cancelAction;
- (void)cancelURLificationForContainer:(id)arg1;
- (void)cancelURLificationForFrame:(id)arg1;
- (void)containerWillBeRemoved:(id)arg1;
- (id)copyContextForContainer:(id)arg1;
- (void)dealloc;
- (id)defaultActionAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)defaultActionForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (id)defaultActionForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)defaultActionForURL:(id)arg1 results:(id)arg2 context:(id)arg3;
- (id)delegate;
- (void)frameWillBeRemoved:(id)arg1;
- (id)init;
- (void)interactionDidStartAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (void)interactionDidStartForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
- (void)interactionDidStartForURL:(id)arg1;
- (bool)isPerformingAction;
- (id)linkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (void)performAction:(id)arg1 fromAlertController:(id)arg2 interactionDelegate:(id)arg3;
- (void)performAction:(id)arg1 fromView:(id)arg2 alertController:(id)arg3 interactionDelegate:(id)arg4;
- (void)performAction:(id)arg1 inView:(id)arg2 interactionDelegate:(id)arg3;
- (id)preferredTextAttributesForLinkAtCharacterIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (void)resetResultsForContainer:(id)arg1;
- (void)resetResultsForFrame:(id)arg1;
- (void)resetResultsForTextView:(id)arg1;
- (struct __DDResult { }*)resultForDOMNode:(id)arg1 forFrame:(id)arg2;
- (struct __DDResult { }*)resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (struct __DDResult { }*)resultForNode:(id)arg1 url:(id)arg2 frame:(id)arg3 contextRef:(id*)arg4;
- (struct __DDResult { }*)resultForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5 extendedContext:(id*)arg6;
- (void)setContext:(id)arg1 forContainer:(id)arg2;
- (void)setContext:(id)arg1 forFrame:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setResults:(struct __CFArray { }*)arg1 forContainer:(id)arg2;
- (void)setResults:(struct __CFArray { }*)arg1 forFrame:(id)arg2;
- (void)set_bizService:(id)arg1;
- (bool)shouldIgnoreMessageActionForURL:(id)arg1;
- (bool)shouldImmediatelyLaunchDefaultActionForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
- (bool)shouldImmediatelyLaunchDefaultActionForTapAndHoldAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (bool)shouldImmediatelyLaunchDefaultActionForURL:(id)arg1;
- (bool)shouldImmediatelyShowActionSheetForTapAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (bool)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2;
- (bool)shouldUseLightStyleAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 moreHighlight:(bool*)arg3;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3;
- (id)titleForResult:(struct __DDResult { }*)arg1 subResult:(struct __DDResult { }*)arg2 withURL:(id)arg3 context:(id)arg4;
- (id)titleForResultAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)titleForURL:(id)arg1 results:(id)arg2 context:(id)arg3;
- (bool)tryDismissActionInView:(id)arg1;
- (void)urlifyTextView:(id)arg1 withExternalResults:(id)arg2 context:(id)arg3;

@end
