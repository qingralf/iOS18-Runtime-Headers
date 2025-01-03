/* Generated by RuntimeBrowser
   Image: /usr/lib/libAccessibility.dylib
 */

@interface AXDefaultsObserverPostDarwinNotificationAction : NSObject <AXDefaultsObserverAction> {
    NSString * _note;
    bool  _shouldPostGlobally;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *note;
@property (nonatomic) bool shouldPostGlobally;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDarwinNotification:(id)arg1 postGlobally:(bool)arg2;
- (id)note;
- (void)performForChangedDefault:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setShouldPostGlobally:(bool)arg1;
- (bool)shouldPostGlobally;

@end
