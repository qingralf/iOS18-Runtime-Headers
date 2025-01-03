/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHSynthesisContractViolation : NSObject {
    NSString * _comment;
    long long  _kind;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _locationRange;
}

@property (nonatomic, readonly) NSString *comment;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } locationRange;

- (void).cxx_destruct;
- (id)comment;
- (id)initWithLocationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 comment:(id)arg2 kind:(long long)arg3;
- (long long)kind;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })locationRange;

@end
