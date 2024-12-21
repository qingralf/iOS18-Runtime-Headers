/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKPlayerTimeDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {
    double  _elapsedTime;
    double  _interval;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double elapsedTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double interval;
@property (nonatomic, readonly) NSDictionary *properties;
@property (readonly) Class superclass;

- (double)elapsedTime;
- (id)initWithInterval:(double)arg1 elapsedTime:(double)arg2;
- (double)interval;
- (id)properties;

@end