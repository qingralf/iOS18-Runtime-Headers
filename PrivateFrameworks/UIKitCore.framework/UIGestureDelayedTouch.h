/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIGestureDelayedTouch : NSObject <NSCopying, _UIGestureDelaying> {
    bool  _clonedForSecondDelivery;
    long long  _delayCount;
    UIEvent * _event;
    UITouch * _stateWhenDelayed;
    UITouch * _stateWhenDelivered;
    UITouch * _touch;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)phaseForDelivery;
- (double)timestampForDelivery;

@end
