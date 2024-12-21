/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDCategorizationProgress : NSObject {
    unsigned long long  _categorizedMessages;
    unsigned long long  _totalMessagesToCategorize;
}

@property (nonatomic, readonly) unsigned long long categorizedMessages;
@property (nonatomic, readonly) unsigned long long totalMessagesToCategorize;

- (unsigned long long)categorizedMessages;
- (id)initWithTotalMessagesToCategorize:(unsigned long long)arg1 categorizedMessages:(unsigned long long)arg2;
- (unsigned long long)totalMessagesToCategorize;

@end