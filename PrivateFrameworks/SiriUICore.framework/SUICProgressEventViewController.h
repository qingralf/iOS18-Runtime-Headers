/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@interface SUICProgressEventViewController : SUICProgressIndicatorViewController <SUICProgressIndicatorViewControllerDataSource> {
    NSProgress * _progress;
    SUICProgressStateMachine * _stateMachine;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleEvent:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)progress;
- (void)setProgress:(id)arg1;
- (id)stateMachineForProgressIndicatorViewController:(id)arg1;

@end
