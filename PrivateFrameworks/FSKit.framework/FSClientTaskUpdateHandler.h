/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FSKit.framework/FSKit
 */

@interface FSClientTaskUpdateHandler : NSObject <FSClientHostXPC> {
    id /* block */  _taskHandler;
}

@property (copy) id /* block */ taskHandler;

- (void).cxx_destruct;
- (void)setTaskHandler:(id /* block */)arg1;
- (id /* block */)taskHandler;
- (void)taskStatusUpdate:(id)arg1;

@end
