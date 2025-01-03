/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateControllerUndo : NSObject <CAStateRecorder> {
    NSMutableArray * _elements;
    CAStateControllerUndo * _next;
    CAState * _state;
    NSMutableArray * _transitions;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) CAStateControllerUndo *next;
@property (nonatomic, retain) CAState *state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *transitions;

- (void)addElement:(id)arg1;
- (void)addTransition:(id)arg1;
- (void)dealloc;
- (id)elements;
- (id)next;
- (void)setElements:(id)arg1;
- (void)setState:(id)arg1;
- (void)setTransitions:(id)arg1;
- (id)state;
- (id)transitions;
- (void)willAddLayer:(id)arg1;

@end
