/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKORPayloadProvider : NSObject {
    NSObject<OS_dispatch_queue> * _drawingQueue;
    NSObject<OS_dispatch_queue> * _lookupQueue;
    NSMutableDictionary * _pendingRequests;
    CUIKORStringGenerator * _stringGenerator;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *drawingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *lookupQueue;
@property (nonatomic, readonly) NSMutableDictionary *pendingRequests;
@property (nonatomic, readonly) CUIKORStringGenerator *stringGenerator;

+ (id)backgroundImageCache;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)_lookupQueue_activeRequestForId:(long long)arg1;
- (void)_lookupQueue_enqueueRequest:(id)arg1;
- (void)_lookupQueue_removeRequestId:(long long)arg1;
- (id)_renderBackgroundImageForState:(id)arg1 backgroundColor:(id)arg2;
- (id)_renderBackgroundImageWithState:(id)arg1;
- (id)_renderColorBlockImageWithState:(id)arg1;
- (id)_renderColorBlockImageWithState:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(double)arg4;
- (id)_renderReminderImageWithState:(id)arg1;
- (void)_renderRequestId:(long long)arg1;
- (id)_renderSelectedColorBlockImageWithState:(id)arg1;
- (id)_renderTextImageWithState:(id)arg1 options:(unsigned long long)arg2;
- (id)_renderTravelTimeImageWithState:(id)arg1;
- (id)_renderUnselectedColorBlockImageWithState:(id)arg1;
- (void)_scheduleRequestId:(long long)arg1;
- (id)_textDrawInfoWithState:(id)arg1 options:(unsigned long long)arg2;
- (void)cancelRequest:(long long)arg1;
- (id)drawingQueue;
- (id)init;
- (id)lookupQueue;
- (id)pendingRequests;
- (long long)requestPayloadForState:(id)arg1 requestOptions:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;
- (id)stringGenerator;

@end
