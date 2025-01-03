/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShaderGraph.framework/ShaderGraph
 */

@interface SGGraph : NSObject <SGHasIO> {
    void argumentsNode;
    void edges;
    void inputs;
    void name;
    void nodeMap;
    void nodes;
    void outputs;
    void resultsNode;
}

@property (nonatomic, readonly) SGNode *argumentsNode;
@property (nonatomic, readonly) NSArray *childNodes;
@property (nonatomic, copy) NSArray *edges;
@property (nonatomic, copy) NSArray *inputs;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSArray *outputs;
@property (nonatomic, readonly) SGNode *resultsNode;

+ (id)graphWithData:(id)arg1 error:(id*)arg2;
+ (id)graphWithName:(id)arg1 inputs:(id)arg2 outputs:(id)arg3;

- (void).cxx_destruct;
- (id)argumentsNode;
- (id)childNodes;
- (bool)connect:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (bool)connectOutputInputPairs:(id)arg1 error:(id*)arg2;
- (id)createDotRepresentationWithError:(id*)arg1;
- (id)edges;
- (id)init;
- (id)inputs;
- (bool)insertNodes:(id)arg1 error:(id*)arg2;
- (id)name;
- (id)nodeNamed:(id)arg1;
- (id)outputs;
- (id)resultsNode;
- (void)setEdges:(id)arg1;
- (void)setInputs:(id)arg1;
- (void)setOutputs:(id)arg1;

@end
