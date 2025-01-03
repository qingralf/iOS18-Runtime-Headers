/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCBackgroundActivityScheduler : NSObject <FCBackgroundActivityScheduler>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)_makeFromFCResult:(long long)arg1;
- (id)_makeFullIdentifierFromIdentifier:(id)arg1;
- (void)cancelRepeatingTaskWithIdentifier:(id)arg1;
- (void)requestBackgroundAppRefreshStartingAfter:(id)arg1 before:(id)arg2;
- (void)scheduleBackgroundTaskRepeatingAtInterval:(double)arg1 identifier:(id)arg2 task:(id /* block */)arg3;

@end
