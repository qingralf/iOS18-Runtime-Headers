/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
 */

@interface NDAssertion : NSObject {
    unsigned int  _powerAssertionID;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) unsigned int powerAssertionID;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 options:(long long)arg2;
- (unsigned int)powerAssertionID;
- (id)transaction;

@end