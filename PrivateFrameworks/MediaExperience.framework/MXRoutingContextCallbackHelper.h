/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

@interface MXRoutingContextCallbackHelper : NSObject {
    int (* mCallback;
    void * mContext;
    NSDate * mCreationTime;
    id  mFigRoutingContextToken;
    NSString * mRouteConfigUpdateID;
}

+ (id)_sharedLock;

- (bool)_didRouteChangeFinish:(struct __CFString { }*)arg1;
- (void)_routeConfigUpdated:(id)arg1;
- (void)dealloc;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1 routeConfigUpdateID:(id)arg2 callback:(int (*)arg3 context:(void*)arg4;

@end
