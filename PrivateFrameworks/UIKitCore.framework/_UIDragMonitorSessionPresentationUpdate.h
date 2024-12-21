/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDragMonitorSessionPresentationUpdate : NSObject {
    _UIDragMonitorSessionBadgeUpdate * _badgeUpdate;
    NSArray * _previewUpdates;
}

@property (nonatomic, retain) _UIDragMonitorSessionBadgeUpdate *badgeUpdate;
@property (nonatomic, retain) NSArray *previewUpdates;

- (void).cxx_destruct;
- (id)badgeUpdate;
- (id)initWithDragPresentationUpdate:(id)arg1;
- (id)initWithDragPreviewUpdates:(id)arg1 badgeUpdate:(id)arg2;
- (id)initWithPreviewUpdates:(id)arg1 badgeUpdate:(id)arg2;
- (id)previewUpdates;
- (void)setBadgeUpdate:(id)arg1;
- (void)setPreviewUpdates:(id)arg1;

@end