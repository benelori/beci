<div class="row">
  <div class="col-xs-12 col-sm-6 col-md-6 col-lg-6 ">
    <div class="title1 title-left">
      <h3 class="block-title"><?php print $title ?></h3>
    </div>
    <div class="panel-group default" id="dexp-accordions-wrapper-1414657310">
      <?php if (isset($content['field_etdk_result'])): ?>
        <div class="panel panel-default">
          <div class="panel-heading">
            <h4 class="panel-title">
              <a href="#dexp-accordion-item-1414657310--0" data-toggle="collapse"
                 data-parent="#dexp-accordions-wrapper-1414657310" class="collapsed">
                <?php print $content['field_etdk_result']['#title']; ?>
              </a>
            </h4>
          </div>
          <div id="dexp-accordion-item-1414657310--0"
               class="panel-collapse collapse">
            <div class="panel-body">
              <?php print render($content['field_etdk_result']); ?>
            </div>
          </div>
        </div>
      <?php endif; ?>
      <?php if (isset($content['field_otdk_result'])): ?>
        <div class="panel panel-default">
          <div class="panel-heading">
            <h4 class="panel-title">
              <a href="#dexp-accordion-item-1414657310--1" data-toggle="collapse"
                 data-parent="#dexp-accordions-wrapper-1414657310" class="collapsed">
                <?php print $content['field_otdk_result']['#title']; ?>
              </a>
            </h4>
          </div>
          <div id="dexp-accordion-item-1414657310--1"
               class="panel-collapse collapse">
            <div class="panel-body">
              <?php print render($content['field_otdk_result']); ?>
            </div>
          </div>
        </div>
      <?php endif; ?>
      <?php if (isset($content['field_competitions_result'])): ?>
        <div class="panel panel-default">
          <div class="panel-heading">
            <h4 class="panel-title">
              <a href="#dexp-accordion-item-1414657310--2"
                 data-toggle="collapse"
                 data-parent="#dexp-accordions-wrapper-1414657310"
                 class="collapsed">
                <?php print $content['field_competitions_result']['#title']; ?>
              </a>
            </h4>
          </div>
          <div id="dexp-accordion-item-1414657310--2"
               class="panel-collapse collapse">
            <div class="panel-body">
              <?php print render($content['field_competitions_result']); ?>
            </div>
          </div>
        </div>
      <?php endif; ?>
      <?php if (isset($content['field_lecturers_list'])): ?>
        <div class="panel panel-default">
          <div class="panel-heading">
            <h4 class="panel-title">
              <a href="#dexp-accordion-item-1414657310--3"
                 data-toggle="collapse"
                 data-parent="#dexp-accordions-wrapper-1414657310"
                 class="collapsed">
                <?php print $content['field_lecturers_list']['#title']; ?>
              </a>
            </h4>
          </div>
          <div id="dexp-accordion-item-1414657310--3"
               class="panel-collapse collapse">
            <div class="panel-body">
              <?php print render($content['field_lecturers_list']); ?>
            </div>
          </div>
        </div>
      <?php endif; ?>
      <?php if (isset($content['field_management_shadowing'])): ?>
        <div class="panel panel-default">
          <div class="panel-heading">
            <h4 class="panel-title">
              <a href="#dexp-accordion-item-1414657310--4"
                 data-toggle="collapse"
                 data-parent="#dexp-accordions-wrapper-1414657310"
                 class="collapsed">
                <?php print $content['field_management_shadowing']['#title']; ?>
              </a>
            </h4>
          </div>
          <div id="dexp-accordion-item-1414657310--4"
               class="panel-collapse collapse">
            <div class="panel-body">
              <?php print render($content['field_management_shadowing']); ?>
            </div>
          </div>
        </div>
      <?php endif; ?>
      <?php if (isset($content['field_management_conference'])): ?>
        <div class="panel panel-default">
          <div class="panel-heading">
            <h4 class="panel-title">
              <a href="#dexp-accordion-item-1414657310--5"
                 data-toggle="collapse"
                 data-parent="#dexp-accordions-wrapper-1414657310"
                 class="collapsed">
                <?php print $content['field_management_conference']['#title']; ?>
              </a>
            </h4>
          </div>
          <div id="dexp-accordion-item-1414657310--5"
               class="panel-collapse collapse">
            <div class="panel-body">
              <?php print render($content['field_management_conference']); ?>
            </div>
          </div>
        </div>
      <?php endif; ?>
      <?php if (isset($content['field_highschool_program'])): ?>
        <div class="panel panel-default">
          <div class="panel-heading">
            <h4 class="panel-title">
              <a href="#dexp-accordion-item-1414657310--6"
                 data-toggle="collapse"
                 data-parent="#dexp-accordions-wrapper-1414657310"
                 class="collapsed">
                <?php print $content['field_highschool_program']['#title']; ?>
              </a>
            </h4>
          </div>
          <div id="dexp-accordion-item-1414657310--6"
               class="panel-collapse collapse">
            <div class="panel-body">
              <?php print render($content['field_highschool_program']); ?>
            </div>
          </div>
        </div>
      <?php endif; ?>
    </div>
  </div>
  <div class="col-xs-12 col-sm-6 col-md-6 col-lg-6 ">
    <?php if(isset($content['body'])): ?>
      <?php print render($content['body']); ?>
    <?php endif; ?>
    <?php if(isset($content['field_downloadable'])): ?>
      <?php print render($content['field_downloadable']); ?>
    <?php endif; ?>
  </div>
</div>