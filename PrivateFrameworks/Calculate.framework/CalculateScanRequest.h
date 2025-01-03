/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
 */

@interface CalculateScanRequest : NSObject {
    bool  _isCanceled;
    NSDictionary * _options;
    id /* block */  _resultHandler;
    NSString * _string;
}

@property (nonatomic) bool isCanceled;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, copy) id /* block */ resultHandler;
@property (nonatomic, retain) NSString *string;

+ (void)_lock;
+ (void)_unlock;
+ (id)concurrentQueue;

- (void).cxx_destruct;
- (void)cancel;
- (bool)isCanceled;
- (id)options;
- (id /* block */)resultHandler;
- (void)setIsCanceled:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (void)update;

@end
