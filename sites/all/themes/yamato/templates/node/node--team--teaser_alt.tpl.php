<div id="node-<?php print $node->nid; ?>" class="team-block <?php print $classes; ?> clearfix"<?php print $attributes; ?>>         
        <div class="team row">
            <div class="team-left col-md-6 col-lg-6 col-sm-6 col-xs-12">
    					<div class="team-image">
                    <?php print render($content['field_team_image']); ?>
    					</div>
          </div>
          <div class="team-right col-md-6 col-lg-6 col-sm-6 col-xs-12">
              <div class="team-name">
                  <?php print $title; ?>
              </div>
						  <div class="team-about">
                        <?php print render($content['body']); ?>
              </div>
                  
              <div class="clearfix"></div>
              <div class="team-social">                                        
                <ul class="icons-social">
                    <?php if(!empty($content['field_team_facebook_link'])):?>
                    <li><a class="facebook" href="<?php print render($content['field_team_facebook_link'][0]);?>"><i class="fa fa-facebook"></i></a></li>
                    <?php endif;?>
                    <?php if(!empty($content['field_team_twitter_link'])):?>
                    <li><a class="twitter" href="<?php print render($content['field_team_twitter_link'][0]);?>"><i class="fa fa-twitter"></i></a></li>
                    <?php endif;?>
                    <?php if(!empty($content['field_team_google_plus_link'])):?>
                    <li><a class="gplus" href="<?php print render($content['field_team_google_plus_link'][0]);?>"><i class="fa fa-google-plus"></i></a></li>
                    <?php endif;?>
                    <?php if(!empty($content['field_team_linkedin_link'])):?>
                    <li><a class="linkedin" href="<?php print render($content['field_team_linkedin_link'][0]);?>"><i class="fa fa-linkedin"></i></a></li>
                    <?php endif;?>
                    <?php if(!empty($content['field_team_youtube_link'])):?>
                    <li><a class="linkedin" href="<?php print render($content['field_team_youtube_link'][0]);?>"><i class="fa fa-youtube"></i></a></li>
                    <?php endif;?>
                </ul>
            </div>
          </div>
       </div>
</div> 
