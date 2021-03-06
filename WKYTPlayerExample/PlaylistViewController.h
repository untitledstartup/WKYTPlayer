// Copyright 2014 Google Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "WKYTPlayer.h"
#include "WKYTPlayerView.h"

@interface PlaylistViewController : UIViewController<WKYTPlayerViewDelegate>

@property(nonatomic, strong) IBOutlet WKYTPlayerView *playerView;
@property(nonatomic, weak) IBOutlet UIButton *playButton;
@property(nonatomic, weak) IBOutlet UIButton *pauseButton;
@property(nonatomic, weak) IBOutlet UIButton *stopButton;
@property(nonatomic, weak) IBOutlet UIButton *nextVideoButton;
@property(nonatomic, weak) IBOutlet UIButton *previousVideoButton;
@property(nonatomic, weak) IBOutlet UITextView *statusTextView;

- (IBAction)buttonPressed:(id)sender;

@end
