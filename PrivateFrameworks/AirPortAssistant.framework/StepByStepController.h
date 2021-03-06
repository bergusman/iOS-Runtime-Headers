/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class <StepByStepUIDelegate>, NSDictionary;

@interface StepByStepController : AssistantCallbackController <AutoGuessSetup, StepByStepUIDelegateResult> {
    id _delegate;
    NSDictionary *_restoreRecommendation;
    struct StepByStepContext { } *_stepByStepContext;
}

@property <StepByStepUIDelegate> * delegate;
@property(retain) NSDictionary * restoreRecommendation;

+ (id)stepByStepController;

- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)restoreRecommendation;
- (void)setDelegate:(id)arg1;
- (void)setRestoreRecommendation:(id)arg1;
- (long)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (void)stepByStepNextStepResult:(long)arg1 withOptions:(id)arg2;
- (long)subclassAssistantCallback:(struct AssistantCallbackContext { struct AssistantContext {} *x1; int x2; struct __CFDictionary {} *x3; int x4; id x5; id x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; void *x8; }*)arg1;

@end
