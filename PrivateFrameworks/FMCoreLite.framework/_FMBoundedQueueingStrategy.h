/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface _FMBoundedQueueingStrategy : NSObject <FMQueueingStrategy> {
    unsigned long long  _capacity;
    id /* block */  _overflowHandler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(id /* block */)arg2;

@end
