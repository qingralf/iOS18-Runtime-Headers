/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRResultReason : NSObject {
    NSString * _reason;
    bool  _result;
}

@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) bool result;

- (void).cxx_destruct;
- (id)initWithResult:(bool)arg1 format:(id)arg2;
- (id)initWithResult:(bool)arg1 reason:(id)arg2;
- (id)reason;
- (bool)result;

@end